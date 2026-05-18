
void FUN_ram_403931a4(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  for (; param_3 != 0; param_3 = param_3 - uVar1) {
    uVar1 = param_3;
    if (0xffc < (int)param_3) {
      uVar1 = 0xffc;
    }
    if (param_4 == 0) {
      uVar2 = *param_1 & 0xff000000 | uVar1 & 0xfff;
      uVar3 = (uVar1 & 0xfff) << 0xc;
    }
    else {
      uVar3 = uVar1 + 3 & 0xffc;
      uVar2 = *param_1 & 0xfffff000;
    }
    *param_1 = uVar2 | uVar3;
    param_1[1] = param_2;
    *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) & 0x3f | 0x80;
    param_1[2] = (uint)(param_1 + 3);
    param_2 = param_2 + uVar1;
    param_1 = param_1 + 3;
  }
  param_1[-1] = 0;
  param_1[-3] = param_1[-3] | 0x40000000;
  return;
}

