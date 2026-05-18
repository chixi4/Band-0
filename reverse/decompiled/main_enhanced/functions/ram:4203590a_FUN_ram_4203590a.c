
undefined4 FUN_ram_4203590a(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)*param_2;
  iVar1 = FUN_ram_4203576a();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4203513c(param_2 + 4,param_1,iVar4);
    uVar2 = 0xfffffffe;
    if (iVar1 == 1) {
      iVar3 = iVar4 * 4 + param_1;
      iVar1 = FUN_ram_4203513c(param_2 + 4,iVar3,iVar4);
      uVar2 = 0xfffffffe;
      if (((iVar1 == 1) && (uVar2 = 0xfffffffb, param_2 == &DAT_ram_3c0f553c)) &&
         (iVar1 = FUN_ram_420362c0(param_1,iVar3,0x20), uVar2 = 0, iVar1 != 0)) {
        uVar2 = 0xfffffffd;
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

