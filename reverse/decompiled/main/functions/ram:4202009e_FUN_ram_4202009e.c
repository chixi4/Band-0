
void FUN_ram_4202009e(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_ram_4201ff9a(param_1,0xffffffff);
  uVar1 = (param_4 + 1) - param_3 & 0xff;
  FUN_ram_4201fe48(0x10);
  for (uVar2 = param_5; uVar2 <= param_6; uVar2 = uVar2 + 1 & 0xff) {
    for (uVar3 = 0; (uVar3 & 0xff) < uVar1; uVar3 = uVar3 + 1) {
      FUN_ram_4201fe50(*(undefined1 *)(uVar2 * 0x19 + param_3 + uVar3 + param_2));
    }
  }
  FUN_ram_4201fe48(0x13);
  param_3 = param_5 * 0x19 + param_3;
  for (; param_5 <= param_6; param_5 = param_5 + 1 & 0xff) {
    for (uVar2 = 0; (uVar2 & 0xff) < uVar1; uVar2 = uVar2 + 1) {
      FUN_ram_4201fe50(*(undefined1 *)(param_1 + param_3 + uVar2));
    }
    param_3 = param_3 + 0x19;
  }
  return;
}

