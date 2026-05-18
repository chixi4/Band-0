
void FUN_ram_42046a22(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_38 [16];
  
  iVar3 = param_1 * 4;
  iVar1 = iVar3 + 0x11;
  (*(code *)&SUB_ram_40010488)(param_2,0,(iVar1 * iVar1 + 7 >> 3) + 1);
  *param_2 = (char)iVar1;
  FUN_ram_4204695a(6,0,1,iVar1,param_2);
  FUN_ram_4204695a(0,6,iVar1,1,param_2);
  FUN_ram_4204695a(0,0,9,9,param_2);
  FUN_ram_4204695a(iVar3 + 9,0,8,9,param_2);
  FUN_ram_4204695a(0,iVar3 + 9,9,8,param_2);
  iVar1 = FUN_ram_420466b0(param_1,local_38);
  iVar4 = 0;
  do {
    if (iVar4 == iVar1) {
      if (6 < param_1) {
        FUN_ram_4204695a(iVar3 + 6,0,3,6,param_2);
        FUN_ram_4204695a(0,iVar3 + 6,6,3,param_2);
        return;
      }
      return;
    }
    iVar2 = 0;
    do {
      if (iVar4 == 0) {
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        if (iVar1 + -1 != iVar2) goto LAB_ram_42046b1e;
      }
      else {
        while ((iVar1 + -1 == iVar4 && (iVar2 == 0))) {
          iVar2 = 1;
        }
LAB_ram_42046b1e:
        FUN_ram_4204695a(local_38[iVar4] - 2,local_38[iVar2] - 2,5,5,param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
    iVar4 = iVar4 + 1;
  } while( true );
}

