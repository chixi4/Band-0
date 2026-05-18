
void FUN_ram_42011c00(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = 0;
LAB_ram_42011c16:
  do {
    uVar3 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,iVar1);
    iVar2 = iVar1 + 1;
    if ((uVar3 & 1) != 0) {
      if (1 < iVar1 - 0x13U) {
        iVar4 = FUN_ram_4201a69c(3);
        if ((iVar4 == iVar1) || (param_1 == 0)) {
          FUN_ram_420187e0();
          iVar1 = iVar2;
        }
        else {
          FUN_ram_42018782(iVar1);
          iVar1 = iVar2;
        }
        goto LAB_ram_42011c16;
      }
      FUN_ram_420187e0(iVar1);
    }
    iVar1 = iVar2;
    if (iVar2 == 0x15) {
      return;
    }
  } while( true );
}

