
void FUN_ram_4203ede6(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int in_a5;
  
  if (-1 < in_a5) {
    bVar1 = *(byte *)(param_1 + 0x40);
    uVar3 = ((uint)*(byte *)(param_1 + 0x3e) * param_2) % 0x25;
    cVar2 = (char)uVar3;
    if (bVar1 < uVar3) {
      *(byte *)(param_1 + 0x40) = (bVar1 + 0x25) - cVar2;
      return;
    }
    *(byte *)(param_1 + 0x40) = bVar1 - cVar2;
  }
  return;
}

