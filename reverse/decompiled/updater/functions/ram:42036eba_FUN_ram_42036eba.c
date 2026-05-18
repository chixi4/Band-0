
void FUN_ram_42036eba(int *param_1,undefined4 param_2,char *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = FUN_ram_420339fc();
  if (param_1 == (int *)0x0) {
LAB_ram_42036edc:
    FUN_ram_42033fd8(1,0x800,1,0x3c07d1bc,0x3c072718,0x984);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar6 = *param_1;
  if (iVar6 == 0) goto LAB_ram_42036edc;
  FUN_ram_420366b2(param_1,param_2);
  if ((*(uint *)(iVar6 + 0x134) & 0xc) == 0) goto LAB_ram_42036f28;
  uVar5 = param_1[3];
  if ((*(ushort *)(param_1 + 0x57) & 0xc) == 0) {
    uVar5 = uVar5 & 0xffffdfff;
    uVar3 = 0x1000;
LAB_ram_42036f24:
    uVar5 = uVar5 | uVar3;
  }
  else {
    if ((*(ushort *)(param_1 + 0x57) & 0xc) == 4) {
      uVar3 = 0x3000;
      goto LAB_ram_42036f24;
    }
    uVar5 = uVar5 & 0xffffcfff;
  }
  param_1[3] = uVar5;
LAB_ram_42036f28:
  if (*param_3 == -0x23) {
    param_3 = param_3 + 4;
  }
  *(char *)((int)param_1 + 0x15f) = param_3[2];
  bVar1 = param_3[3];
  *(byte *)(param_1 + 0x58) = bVar1 & 3;
  *(byte *)((int)param_1 + 0x161) = param_3[4] & 3;
  *(byte *)((int)param_1 + 0x162) = param_3[6] & 0x7f;
  bVar4 = bVar1 & 4;
  if ((((bVar1 & 4) != 0) && (bVar4 = 0, (*(uint *)(iVar6 + 300) & 0x1000000) != 0)) &&
     (bVar4 = 1, (bVar1 & 3) != 1)) {
    bVar4 = ((bVar1 & 3) == 3) << 1;
  }
  if (((bVar1 & 8) == 0) || ((*(uint *)(iVar6 + 300) & 0x20000000) == 0)) {
    uVar5 = param_1[3] & 0xffffbfffU | 0xc0;
  }
  else {
    uVar5 = param_1[3] | 0x40c0;
  }
  param_1[3] = uVar5;
  if (*(byte *)(param_1 + 0x2b) != bVar4) {
    *(byte *)(param_1 + 0x2b) = bVar4;
    if (*(int **)(iVar6 + 0xe4) == param_1) {
      FUN_ram_42033fd8(1,8,5,0x3c07efc8);
      *(byte *)(iVar6 + 299) = bVar4;
      FUN_ram_42036888((int)param_1 + 0xab);
      FUN_ram_4203f87a(1,param_1);
    }
  }
  if ((*(byte *)(iVar2 + 1) != bVar4) && (bVar4 != 0)) {
    FUN_ram_42033fd8(1,8,5,0x3c07efd8);
    return;
  }
  return;
}

