
void FUN_ram_420b2940(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     int param_7)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 * -8 + 0x60047ce4);
  *puVar1 = *puVar1 & 0xfffffff | param_2 << 0x1c;
  puVar1 = (uint *)(param_1 * -0x4c + 0x600481cc);
  *puVar1 = (param_3 & 0xf) << 0xc | *puVar1 & 0xffff0fff;
  *puVar1 = (param_4 & 0xf) << 8 | *puVar1 & 0xfffff0ff;
  *puVar1 = (param_5 & 0xf) << 4 | *puVar1 & 0xffffff0f;
  *puVar1 = (param_6 & 0xf) << 0x10 | *puVar1 & 0xfff0ffff;
  *puVar1 = *puVar1 & 0xfffff | param_7 << 0x14;
  return;
}

