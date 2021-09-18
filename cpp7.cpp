void menu()
{
    int choice;
    printf("\n\t\t******************** 主菜单 ********************");
    printf("\n\t\t*********** 1-添加纪录 2-查询纪录 ************");
    printf("\n\t\t*********** 3-删除纪录 4-修改记录 ************");
    printf("\n\t\t*********** 5-显示纪录 6-退出系统 ************");
    printf("\n\t\t************************************************");
    printf("\n\t\t分支数为：%d\n", i); /*插装探针*/
    printf("\n\t\t请选择：");
    scanf("%d", &choice);
    rewind(stdin);
    printf("\n");
    switch (choice)
    {
    case 1:
        printf("\n\t\t分支：%d\n", ++i); /*插装探针*/
        head = insert(head);
        rewind(stdin);
        menu();
        break;
    case 2:
        printf("\n\t\t分支：%d\n", ++i); /*插装探针*/
        search(head);
        rewind(stdin);
        menu();
        break;
    case 3:
        printf("\n\t\t分支：%d\n", ++i); /*插装探针*/
        head = delet(head);
        rewind(stdin);
        menu();
        break;
    case 4:
        printf("\n\t\t分支：%d\n", ++i); /*插装探针*/
        head = alter(head);
        rewind(stdin);
        menu();
        break;
    case 5:
        printf("\n\t\t分支：%d\n", ++i); /*插装探针*/
        show(head);
        rewind(stdin);
        menu();
        break;
    default:
        printf("\n\t\t分支：%d\n", ++i); /*插装探针*/
        printf("\n\t\t谢谢使用!!");
        break;
    }
}

