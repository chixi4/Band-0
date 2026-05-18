
void FUN_ram_420366b2(int *param_1,char *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 uStack_20;
  undefined1 auStack_1f [19];
  
  if ((param_1 == (int *)0x0) || (param_2 == (char *)0x0)) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d1ac,0x3c072718,0x7fe);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*param_2 == -0x23) {
    param_1[3] = param_1[3] | 0x80;
    param_2 = param_2 + 4;
  }
  else if (DAT_ram_3fcb512e != '\x01') {
    param_1[3] = param_1[3] | 0x40;
  }
  uVar2 = *(ushort *)(param_2 + 2);
  *(ushort *)(param_1 + 0x57) = uVar2;
  *(char *)((int)param_1 + 0x15e) = param_2[4];
  uVar4 = param_1[3];
  param_1[3] = uVar4 & 0xfffe7fff;
  if (((uVar2 & 0x20) != 0) && ((*(uint *)(*param_1 + 300) & 0x4000000) != 0)) {
    param_1[3] = uVar4 & 0xfffe7fff | 0x8000;
  }
  if ((uVar2 & 0x40) != 0) {
    if ((*(uint *)(*param_1 + 300) & 0x8000000) != 0) {
      param_1[3] = param_1[3] | 0x10000;
    }
  }
  bVar1 = param_2[5];
  FUN_ram_40399daa(&uStack_20,0x3c078cfc,0x10);
  if (bVar1 < 0x81) {
    *(undefined1 *)((int)param_1 + 0x2f2) = 1;
  }
  uVar4 = 0;
  do {
    if ((bVar1 >> (7 - uVar4 & 0x1f) & 1) != 0) {
      if (((uVar4 & 0xff) != 0) || (uVar3 = 0x90, (param_1[3] & 0x18000U) == 0)) {
        uVar3 = auStack_1f[uVar4 * 2];
      }
      goto LAB_ram_420367a4;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 8);
  uVar3 = 0;
LAB_ram_420367a4:
  *(undefined1 *)((int)param_1 + 0x2ee) = uVar3;
  return;
}

