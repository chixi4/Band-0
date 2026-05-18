
int FUN_ram_42046b66(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (3 < param_2) {
    uVar3 = FUN_ram_42046b52();
  }
  iVar2 = FUN_ram_42046848();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20) * 0x29;
  return (iVar2 >> 3) -
         (int)(char)(&UNK_ram_3c0f71e8)[(int)uVar3 + iVar1] *
         (int)(char)(&UNK_ram_3c0f7144)[(int)uVar3 + iVar1];
}

