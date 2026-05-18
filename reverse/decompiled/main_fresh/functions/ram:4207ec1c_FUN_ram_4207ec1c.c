
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207ec1c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  int *piVar8;
  uint uVar9;
  byte bStack_38;
  char cStack_37;
  ushort uStack_36;
  uint auStack_34 [4];
  
  iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x158))(0x400);
  if (iVar3 == 0) {
    FUN_ram_4207a038(1,0x101,2,
                     "MgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                    );
    uVar4 = 0x101;
  }
  else {
    uVar9 = 0;
    (*(code *)&SUB_ram_40010488)(iVar3,0xff,0x400);
    piVar8 = (int *)(gp + -0xb4);
    do {
      iVar2 = _DAT_ram_3fcc2a14 + uVar9 * 0x34;
      if (*(byte *)(iVar2 + 0x20) != uVar9) {
        FUN_ram_4207a038(1,0x102,2,
                         "/V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                         ,uVar9);
        goto LAB_ram_4207ecc8;
      }
      bVar1 = *(byte *)(iVar2 + 0x21);
      if (bVar1 == 2) {
        if (_DAT_ram_3fcc2ffc == 0) {
          if (param_1 != 0) goto LAB_ram_4207ee52;
        }
        else if (param_1 == 0) {
          iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x120))
                            (*(undefined4 *)(*piVar8 + 0x410),iVar2,&uStack_36);
          if (iVar5 == 0) {
            **(ushort **)(iVar2 + 0x30) = uStack_36;
            if ((*(int *)(iVar2 + 0x24) <= (int)(uint)uStack_36) &&
               ((uint)uStack_36 <= (uint)*(ushort *)(iVar2 + 0x28))) goto LAB_ram_4207ed32;
          }
        }
        else {
LAB_ram_4207ee52:
          if ((_DAT_ram_3fcc2ffc != 0) &&
             (iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x11c))
                                (*(undefined4 *)(*piVar8 + 0x410),iVar2,
                                 *(uint *)(iVar2 + 0x2c) & 0xffff), iVar5 != 0)) {
LAB_ram_4207ecc8:
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar3);
            return 0xffffffff;
          }
        }
        **(undefined2 **)(iVar2 + 0x30) = (short)*(undefined4 *)(iVar2 + 0x2c);
      }
      else if (bVar1 < 3) {
        if (bVar1 == 0) {
          if (_DAT_ram_3fcc2ffc == 0) {
            if (param_1 != 0) goto LAB_ram_4207edf2;
          }
          else if (param_1 == 0) {
            iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x118))
                              (*(undefined4 *)(*piVar8 + 0x410),iVar2,&bStack_38);
            if (iVar5 == 0) {
              **(byte **)(iVar2 + 0x30) = bStack_38;
              if ((*(int *)(iVar2 + 0x24) <= (int)(uint)bStack_38) &&
                 ((uint)bStack_38 <= (uint)*(ushort *)(iVar2 + 0x28))) goto LAB_ram_4207ed32;
            }
          }
          else {
LAB_ram_4207edf2:
            if (_DAT_ram_3fcc2ffc != 0) {
              iVar5 = *piVar8;
              uVar6 = *(uint *)(iVar2 + 0x2c) & 0xff;
              pcVar7 = *(code **)(_DAT_ram_3fcdfdd8 + 0x114);
LAB_ram_4207ede2:
              iVar5 = (*pcVar7)(*(undefined4 *)(iVar5 + 0x410),iVar2,uVar6);
              if (iVar5 != 0) goto LAB_ram_4207ecc8;
            }
          }
        }
        else if (_DAT_ram_3fcc2ffc == 0) {
          if (param_1 != 0) goto LAB_ram_4207edce;
        }
        else if (param_1 == 0) {
          iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x110))
                            (*(undefined4 *)(*piVar8 + 0x410),iVar2,&cStack_37);
          if (iVar5 == 0) {
            **(char **)(iVar2 + 0x30) = cStack_37;
            if ((*(int *)(iVar2 + 0x24) <= (int)cStack_37) &&
               ((int)cStack_37 <= (int)(uint)*(ushort *)(iVar2 + 0x28))) goto LAB_ram_4207ed32;
          }
        }
        else {
LAB_ram_4207edce:
          if (_DAT_ram_3fcc2ffc != 0) {
            iVar5 = *piVar8;
            pcVar7 = *(code **)(_DAT_ram_3fcdfdd8 + 0x10c);
            uVar6 = (uint)(char)*(undefined4 *)(iVar2 + 0x2c);
            goto LAB_ram_4207ede2;
          }
        }
        **(undefined1 **)(iVar2 + 0x30) = (char)*(undefined4 *)(iVar2 + 0x2c);
      }
      else if ((byte)(bVar1 - 6) < 2) {
        auStack_34[0] = (uint)*(ushort *)(iVar2 + 0x22);
        if (_DAT_ram_3fcc2ffc != 0) {
          iVar5 = *piVar8;
          if (param_1 == 0) {
            iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x134))
                              (*(undefined4 *)(iVar5 + 0x410),iVar2,*(undefined4 *)(iVar2 + 0x30),
                               auStack_34,iVar5,*(code **)(_DAT_ram_3fcdfdd8 + 0x134));
            if (iVar5 == 0) goto LAB_ram_4207ed32;
          }
          else {
            iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x130))
                              (*(undefined4 *)(iVar5 + 0x410),iVar2,iVar3,auStack_34[0],iVar5,
                               *(code **)(_DAT_ram_3fcdfdd8 + 0x130));
            if (iVar5 != 0) goto LAB_ram_4207ecc8;
          }
        }
        FUN_ram_4039c11e(*(undefined4 *)(iVar2 + 0x30),iVar3,*(undefined2 *)(iVar2 + 0x22));
      }
LAB_ram_4207ed32:
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x54);
    FUN_ram_4207ea74();
    FUN_ram_4207ea20();
    FUN_ram_4207eb54();
    FUN_ram_4207eac0();
    FUN_ram_4207e9b0();
    FUN_ram_4207e9d4();
    FUN_ram_4207eb0a();
    FUN_ram_4207eb3e();
    FUN_ram_4207e772();
    FUN_ram_4207ebf2();
    if (_DAT_ram_3fcc2ffc != 0) {
      FUN_ram_4207e5ae();
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar3);
    uVar4 = 0;
  }
  return uVar4;
}

