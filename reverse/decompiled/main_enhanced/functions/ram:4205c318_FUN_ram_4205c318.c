
undefined4
FUN_ram_4205c318(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_ram_420523aa(param_5);
  iVar2 = FUN_ram_42053a64(param_2,0xe);
  if (iVar2 != 0) {
    return 0xfffffffe;
  }
  iVar2 = *(int *)(param_2 + 4);
  *(char *)(iVar2 + 0xc) = (char)uVar1;
  *(char *)(iVar2 + 0xd) = (char)((ushort)uVar1 >> 8);
  iVar2 = FUN_ram_4039c11e(iVar2,param_4,6);
  FUN_ram_4039c11e(iVar2 + 6,param_3,6);
  if (*(char *)(param_1 + 0x38) != '\x06') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
                    /* WARNING: Could not recover jumptable at 0x4205c390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(param_1 + 0x18))(param_1,param_2);
  return uVar3;
}

