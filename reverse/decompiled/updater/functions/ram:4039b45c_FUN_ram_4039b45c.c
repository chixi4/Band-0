
void FUN_ram_4039b45c(int param_1,uint *param_2)

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
      goto LAB_ram_4039b488;
    }
    if ((uVar4 & 2) != 0) {
      uVar4 = *(uint *)(param_1 + 0x68);
      goto LAB_ram_4039b49a;
    }
    if (-1 < (char)bVar1) {
      FUN_ram_4204bd9a();
    }
  }
  else {
    param_2[7] = *(uint *)(param_1 + 100);
    if ((bVar1 & 2) != 0) {
      uVar5 = *(undefined1 *)(param_1 + 9);
      goto LAB_ram_4039b488;
    }
    if ((char)bVar1 < '\0') {
      uVar4 = param_2[4];
      if ((uVar4 & 0x80000) == 0) {
        if ((uVar4 & 0x10000) == 0) {
          if (((uVar4 & 0x20000) == 0) || (iVar3 = FUN_ram_4203e1ce(), iVar3 != 0)) {
            uVar4 = gp + 0x610;
            goto LAB_ram_4039b49a;
          }
          cVar2 = *(char *)(*(int *)(gp + -0x2b8) + 0x475);
          goto LAB_ram_4039b504;
        }
      }
      else {
        cVar2 = *(char *)(*(int *)(gp + -0x2b8) + 0x50d);
LAB_ram_4039b504:
        if (cVar2 == '\0') goto LAB_ram_4039b4ae;
      }
      uVar4 = gp + 0x784;
    }
    else {
      if ((((uVar4 & 0x200800) == 0) || (*(char *)(param_1 + 0x82) == '\0')) ||
         (param_2[7] = gp + 0x5e0, *(char *)(param_1 + 0x87) == '\0')) goto LAB_ram_4039b4ae;
      uVar4 = gp + 0x778;
    }
LAB_ram_4039b49a:
    param_2[7] = uVar4;
  }
LAB_ram_4039b4ae:
  uVar5 = *(undefined1 *)param_2[7];
LAB_ram_4039b488:
  *(undefined1 *)(param_2 + 3) = uVar5;
  return;
}

