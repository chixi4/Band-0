
void FUN_ram_42040ca2(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    uVar2 = *(undefined2 *)(param_2 + 2);
    bVar1 = *(byte *)(param_2 + 4);
    *(undefined2 *)(param_1 + 0x332) = uVar2;
    *(byte *)(param_1 + 0x334) = bVar1 & 1;
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      uVar3 = 0x3c072e48;
    }
    else {
      uVar3 = 0x3c072e40;
    }
    FUN_ram_42033fd8(1,1,3,0x3c07e674,uVar2,uVar3);
    return;
  }
  return;
}

