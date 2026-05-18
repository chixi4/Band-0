
void FUN_ram_4202e618(int param_1)

{
  undefined2 uVar1;
  undefined1 auStack_114 [4];
  uint uStack_110;
  undefined2 uStack_10c;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  
  uVar1 = *(undefined2 *)(param_1 + 2);
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  auStack_114[0] = 0x12;
  uStack_110 = (uint)*(byte *)(param_1 + 1);
  uStack_10a = *(undefined1 *)(param_1 + 4);
  uStack_109 = *(undefined1 *)(param_1 + 5);
  uStack_10c = uVar1;
  FUN_ram_4202e1e0(auStack_114);
  FUN_ram_4202e186(auStack_114,uVar1);
  return;
}

