void menu()
{
    int choice;
    printf("\n\t\t******************** ���˵� ********************");
    printf("\n\t\t*********** 1-��Ӽ�¼ 2-��ѯ��¼ ************");
    printf("\n\t\t*********** 3-ɾ����¼ 4-�޸ļ�¼ ************");
    printf("\n\t\t*********** 5-��ʾ��¼ 6-�˳�ϵͳ ************");
    printf("\n\t\t************************************************");
    printf("\n\t\t��֧��Ϊ��%d\n", i); /*��װ̽��*/
    printf("\n\t\t��ѡ��");
    scanf("%d", &choice);
    rewind(stdin);
    printf("\n");
    switch (choice)
    {
    case 1:
        printf("\n\t\t��֧��%d\n", ++i); /*��װ̽��*/
        head = insert(head);
        rewind(stdin);
        menu();
        break;
    case 2:
        printf("\n\t\t��֧��%d\n", ++i); /*��װ̽��*/
        search(head);
        rewind(stdin);
        menu();
        break;
    case 3:
        printf("\n\t\t��֧��%d\n", ++i); /*��װ̽��*/
        head = delet(head);
        rewind(stdin);
        menu();
        break;
    case 4:
        printf("\n\t\t��֧��%d\n", ++i); /*��װ̽��*/
        head = alter(head);
        rewind(stdin);
        menu();
        break;
    case 5:
        printf("\n\t\t��֧��%d\n", ++i); /*��װ̽��*/
        show(head);
        rewind(stdin);
        menu();
        break;
    default:
        printf("\n\t\t��֧��%d\n", ++i); /*��װ̽��*/
        printf("\n\t\tллʹ��!!");
        break;
    }
}

