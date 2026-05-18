
void FUN_ram_4039d828(int param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = *param_2;
  bVar1 = *(byte *)(param_1 + 0xb);
  if ((uVar4 & 0x2000008) == 8) {
    param_2[7] = *(uint *)(param_1 + 0x60);
    if ((bVar1 & 1) != 0) {
      uVar5 = *(undefined1 *)(param_1 + 8);
      goto LAB_ram_4039d854;
    }
    if ((uVar4 & 2) != 0) {
      uVar4 = *(uint *)(param_1 + 0x68);
      goto LAB_ram_4039d866;
    }
    if (-1 < (char)bVar1) {
      FUN_ram_420947b2();
    }
  }
  else {
    param_2[7] = *(uint *)(param_1 + 100);
    if ((bVar1 & 2) != 0) {
      uVar5 = *(undefined1 *)(param_1 + 9);
      goto LAB_ram_4039d854;
    }
    if ((char)bVar1 < '\0') {
      uVar4 = param_2[4];
      if ((uVar4 & 0x80000) == 0) {
        if ((uVar4 & 0x10000) == 0) {
          if (((uVar4 & 0x20000) == 0) || (iVar3 = FUN_ram_420860c4(), iVar3 != 0)) {
            uVar4 = gp + 0x744;
            goto LAB_ram_4039d866;
          }
          cVar2 = *(char *)(*(int *)(gp + -0xb4) + 0x475);
          goto LAB_ram_4039d8d4;
        }
      }
      else {
        cVar2 = *(char *)(*(int *)(gp + -0xb4) + 0x50d);
LAB_ram_4039d8d4:
        if (cVar2 == '\0') goto LAB_ram_4039d87a;
      }
      uVar4 = 0x3fcb7ca8;
    }
    else {
      if ((((uVar4 & 0x200800) == 0) || (*(char *)(param_1 + 0x82) == '\0')) ||
         (param_2[7] = gp + 0x714, *(char *)(param_1 + 0x87) == '\0')) goto LAB_ram_4039d87a;
      uVar4 = 0x3fcb7c9c;
    }
LAB_ram_4039d866:
    param_2[7] = uVar4;
  }
LAB_ram_4039d87a:
  uVar5 = *(undefined1 *)param_2[7];
LAB_ram_4039d854:
  *(undefined1 *)(param_2 + 3) = uVar5;
  return;
}

