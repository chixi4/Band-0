
void FUN_ram_4208920a(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    uVar2 = *(undefined2 *)(param_2 + 2);
    bVar1 = *(byte *)(param_2 + 4);
    *(undefined2 *)(param_1 + 0x332) = uVar2;
    *(byte *)(param_1 + 0x334) = bVar1 & 1;
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      pcVar3 = "rself a small reward after work.";
    }
    else {
      pcVar3 = "Give yourself a small reward after work.";
    }
    FUN_ram_4207a038(1,1,3,&DAT_ram_3c1001a4,uVar2,pcVar3);
    return;
  }
  return;
}

