
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42086408(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fce2c,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
                   param_1[5],DAT_ram_3fcc3f74);
  iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(0xc);
  if (iVar2 == 0) {
    FUN_ram_4207a038(1,4,2,&DAT_ram_3c102000);
    return;
  }
  FUN_ram_4039c11e(iVar2,param_1,6);
  iVar1 = _DAT_ram_3fcc3f70;
  *(undefined4 *)(iVar2 + 8) = 0;
  if (iVar1 != 0) {
    iVar3 = FUN_ram_42086328(param_1);
    if (iVar3 != 0) {
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fce6c);
                    /* WARNING: Could not recover jumptable at 0x420864f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar2);
      return;
    }
    *(int *)(iVar2 + 8) = iVar1;
  }
  _DAT_ram_3fcc3f70 = iVar2;
  DAT_ram_3fcc3f74 = DAT_ram_3fcc3f74 + '\x01';
  return;
}

