
void FUN_ram_4202f10c(byte *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 auStack_114 [4];
  int iStack_110;
  undefined2 uStack_10c;
  
  uVar2 = *(undefined2 *)(param_1 + 1);
  bVar1 = *param_1;
  if (bVar1 == 0) {
    iVar3 = 0;
    if (param_1[3] != 0) {
      iVar3 = param_1[3] + 0x200;
    }
    FUN_ram_4202efe4(uVar2,iVar3);
    return;
  }
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  iStack_110 = bVar1 + 0x200;
  auStack_114[0] = 6;
  uStack_10c = uVar2;
  FUN_ram_4202e1e0(auStack_114);
  FUN_ram_4202e186(auStack_114,uVar2);
  return;
}

