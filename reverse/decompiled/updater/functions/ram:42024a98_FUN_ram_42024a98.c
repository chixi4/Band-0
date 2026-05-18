
int FUN_ram_42024a98(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4202479e(param_1,1);
  if (iVar1 == 0) {
    (*(code *)&SUB_ram_40010488)(*param_1,0,(uint)*(ushort *)((int)param_1 + 6) << 2);
    *(uint *)*param_1 = ((int)param_2 >> 0x1f ^ param_2) - ((int)param_2 >> 0x1f);
    *(ushort *)(param_1 + 1) = (ushort)((int)param_2 >> 0x1f) | 1;
  }
  return iVar1;
}

