
undefined4 FUN_ram_42026296(int param_1,uint param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  
  if ((uint)((param_4 & 3) != 0) + (param_4 >> 2) <= param_2) {
    if (param_1 != 0) {
      (*(code *)&SUB_ram_40010488)(param_1,0,param_2 << 2);
      for (uVar2 = 0; uVar2 != param_4; uVar2 = uVar2 + 1) {
        puVar1 = (uint *)((uVar2 & 0xfffffffc) + param_1);
        *puVar1 = *puVar1 | (uint)*(byte *)(param_3 + uVar2) << ((uVar2 & 3) << 3);
      }
    }
    return 0;
  }
  return 0xfffffff8;
}

