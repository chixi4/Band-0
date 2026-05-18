
void FUN_ram_40398b7e(undefined4 *param_1,uint param_2)

{
  if (param_2 < 0x3fffb) {
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffc0000 | param_2 & 0x3ffff;
  }
  return;
}

