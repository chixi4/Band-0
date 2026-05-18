
void FUN_ram_4204f776(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  FUN_ram_420adfa4();
  FUN_ram_420ac4fa(1);
  iVar1 = FUN_ram_4039c08e(1,0x770);
  if (iVar1 != 0) {
    iVar2 = (*(code *)&SUB_ram_40010018)(0);
    iVar3 = FUN_ram_4204f606(iVar1);
    cVar4 = '\x02';
    if (iVar3 == 0) {
      cVar4 = iVar2 == 5;
    }
    iVar2 = thunk_FUN_ram_4204b7ce(&uStack_28);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + 4) = uStack_28;
      *(undefined2 *)(iVar1 + 8) = uStack_24;
      iVar2 = FUN_ram_420ace18(&DAT_ram_3c0f744c,iVar1,cVar4);
      if ((cVar4 != '\x01') && ((iVar3 != 0 || (iVar2 == 1)))) {
        FUN_ram_4204f6dc(iVar1);
      }
      iVar2 = FUN_ram_420b4ada(0x40384042);
      if ((iVar2 == 0) && (iVar2 = FUN_ram_420b4ada(0x4209c4c2), iVar2 == 0)) {
        thunk_FUN_ram_40390634(iVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

