
int FUN_ram_4208156a(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  byte abStack_21 [9];
  
  bVar1 = *(byte *)(param_1 + 8);
  if (4 < bVar1) {
    return 0x102;
  }
  bVar2 = **(byte **)(gp + -0xb4);
  abStack_21[0] = bVar1;
  if (bVar1 == bVar2) {
    iVar3 = FUN_ram_4207e7c6(0,abStack_21);
    if (iVar3 == 0) goto LAB_ram_4208164c;
    **(byte **)(gp + -0xb4) = abStack_21[0];
  }
  else {
    if (1 < DAT_ram_3fcc41a9) {
      if (DAT_ram_3fcc41a9 == 2) {
        FUN_ram_4207ff48(bVar2,bVar1);
      }
      iVar3 = FUN_ram_4208c43c(bVar1);
      if (iVar3 != 0) {
        FUN_ram_4208c43c(bVar2);
        FUN_ram_4207ffa2(bVar2);
        puVar4 = &DAT_ram_3c0fed20;
LAB_ram_420815dc:
        FUN_ram_4207a038(1,3,1,puVar4,iVar3,bVar2);
        return iVar3;
      }
      FUN_ram_420814c2(bVar2,bVar1);
      if (((((bVar1 & 0xfd) == 1) && ((bVar2 & 0xfd) != 1)) &&
          (iVar3 = FUN_ram_4207ffa2(1), iVar3 != 0)) ||
         ((((byte)(bVar1 - 2) < 2 && (1 < (byte)(bVar2 - 2))) &&
          (iVar3 = FUN_ram_4207ffa2(2), iVar3 != 0)))) {
        FUN_ram_4207ff48(bVar1,bVar2);
        FUN_ram_4208c43c(bVar2);
        FUN_ram_420814c2(bVar1,bVar2);
        FUN_ram_4207ffa2(bVar2);
        puVar4 = &DAT_ram_3c0feda8;
        goto LAB_ram_420815dc;
      }
    }
    **(byte **)(gp + -0xb4) = abStack_21[0];
  }
  iVar3 = FUN_ram_4207e5e6(0,abStack_21[0],DAT_ram_3fcc41d5 == '\0');
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_ram_4208164c:
  iVar3 = FUN_ram_4207e5ae();
  return iVar3;
}

