
undefined4 FUN_ram_420a5f74(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = param_1[0xe];
  uVar2 = (uint)*(byte *)(*(int *)(iVar3 + 0xc) + 10);
  if (((uVar2 < 0xb) && ((0x69eU >> (uVar2 & 0x1f) & 1) != 0)) &&
     ((*(char *)(*param_1 + 8) != '\0' || (*(char *)(iVar3 + 0x160) != '\0')))) {
    piVar4 = *(int **)(iVar3 + 0xf8);
    if ((piVar4 == (int *)0x0) && (piVar4 = *(int **)(*param_1 + 0x44), piVar4 == (int *)0x0)) {
      iVar3 = 7;
    }
    else {
      iVar3 = 7;
      for (iVar5 = *piVar4; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x194)) {
        uVar2 = *(uint *)(iVar5 + 8);
        if (0x7fdU - iVar3 < uVar2) {
          return 0xffff9600;
        }
        *(char *)(param_1[0x2a] + iVar3) = (char)(uVar2 >> 0x10);
        *(char *)(param_1[0x2a] + iVar3 + 1) = (char)(uVar2 >> 8);
        *(char *)(param_1[0x2a] + iVar3 + 2) = (char)uVar2;
        FUN_ram_4039c11e(param_1[0x2a] + iVar3 + 3,*(undefined4 *)(iVar5 + 0xc),uVar2);
        iVar3 = uVar2 + iVar3 + 3;
      }
    }
    iVar5 = iVar3 + -7;
    *(char *)(param_1[0x2a] + 4) = (char)((uint)iVar5 >> 0x10);
    *(char *)(param_1[0x2a] + 5) = (char)((uint)iVar5 >> 8);
    *(char *)(param_1[0x2a] + 6) = (char)iVar5;
    param_1[0x2c] = iVar3;
    param_1[0x2b] = 0x16;
    *(undefined1 *)param_1[0x2a] = 0xb;
    param_1[1] = param_1[1] + 1;
    uVar1 = FUN_ram_420a49cc(param_1,1);
    return uVar1;
  }
  param_1[1] = param_1[1] + 1;
  return 0;
}

