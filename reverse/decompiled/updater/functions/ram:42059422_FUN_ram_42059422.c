
undefined4
FUN_ram_42059422(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_ram_4205073e(param_5);
  iVar2 = FUN_ram_42051cac(param_2,0xe);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_2 + 4);
    *(char *)(iVar2 + 0xc) = (char)uVar1;
    *(char *)(iVar2 + 0xd) = (char)((ushort)uVar1 >> 8);
    iVar2 = FUN_ram_40399daa(iVar2,param_4,6);
    FUN_ram_40399daa(iVar2 + 6,param_3);
                    /* WARNING: Could not recover jumptable at 0x42059488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_1 + 0x18))(param_1,param_2);
    return uVar3;
  }
  return 0xfffffffe;
}

