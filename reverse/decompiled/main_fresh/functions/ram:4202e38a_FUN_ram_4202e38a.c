
void FUN_ram_4202e38a(int param_1)

{
  undefined1 auStack_114 [4];
  undefined1 uStack_110;
  undefined2 uStack_10e;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 auStack_10a [258];
  
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  auStack_114[0] = 0x33;
  uStack_110 = *(undefined1 *)(param_1 + 1);
  uStack_10e = *(undefined2 *)(param_1 + 2);
  uStack_10c = *(undefined1 *)(param_1 + 4);
  uStack_10b = *(undefined1 *)(param_1 + 5);
  FUN_ram_4039c11e(auStack_10a,param_1 + 6,0xf8);
  FUN_ram_4202e1e0(auStack_114);
  FUN_ram_4202e186(auStack_114,*(undefined2 *)(param_1 + 2));
  return;
}

