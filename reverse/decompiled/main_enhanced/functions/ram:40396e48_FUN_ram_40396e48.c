
undefined4 FUN_ram_40396e48(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iStack_14;
  
  iVar3 = *(int *)(param_1 + 0x48);
  iStack_14 = param_1;
  if ((iVar3 != 0) && (*(uint *)(iVar3 + 0x38) < *(uint *)(iVar3 + 0x3c))) {
    uVar5 = 0;
    if (*(uint *)(iVar3 + 0x38) < *(uint *)(iVar3 + 0x3c)) {
      cVar1 = *(char *)(iVar3 + 0x45);
      uVar5 = FUN_ram_40396da6(iVar3,&iStack_14,0);
      uVar2 = (uint)cVar1;
      if (uVar2 == 0xffffffff) {
        if ((*(int *)(iVar3 + 0x24) != 0) && (iVar3 = FUN_ram_40398762(iVar3 + 0x24), iVar3 != 0)) {
          uVar5 = 1;
        }
      }
      else {
        uVar4 = FUN_ram_403980ea();
        if (uVar2 < uVar4) {
          if (uVar2 == 0x7f) goto LAB_ram_40396e58;
          *(char *)(iVar3 + 0x45) = (char)((uVar2 + 1) * 0x1000000 >> 0x18);
        }
      }
    }
    return uVar5;
  }
LAB_ram_40396e58:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

