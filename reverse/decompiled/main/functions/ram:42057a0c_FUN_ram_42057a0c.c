
undefined4 FUN_ram_42057a0c(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = CONCAT44(param_2,param_1);
  uVar9 = uVar8;
  if ((param_2 & 3) != 0) goto LAB_ram_42057a24;
  while( true ) {
    do {
      uVar8 = FUN_ram_4039bf1e((int)uVar9,(int)(uVar9 >> 0x20));
LAB_ram_42057a24:
      uVar3 = (uint)(uVar8 >> 0x20);
      iVar1 = (int)uVar8;
      uVar9 = (ulonglong)uVar3 << 0x20;
    } while (iVar1 == 0);
    uVar4 = uVar3 >> 1 & 1;
    uVar7 = uVar4 << 2;
    iVar2 = FUN_ram_42053b52(0x36,uVar7,0x280);
    uVar9 = CONCAT44(iVar2,iVar2);
    if (iVar2 == 0) break;
    if (uVar7 <= *(ushort *)(iVar2 + 10)) {
      uVar9 = FUN_ram_4205725a(iVar1,iVar2,uVar3,*(undefined4 *)(iVar1 + 0x60),uVar4);
      iVar2 = (int)uVar9;
      if (iVar2 == 0) break;
      if (((*(uint *)(iVar2 + 0xc) & 3) == 0) && (*(short *)(iVar2 + 8) == 0)) {
        piVar6 = *(int **)(iVar1 + 0x70);
        if (*(int **)(iVar1 + 0x70) == (int *)0x0) {
          *(int *)(iVar1 + 0x70) = iVar2;
        }
        else {
          do {
            piVar5 = piVar6;
            piVar6 = (int *)*piVar5;
          } while (piVar6 != (int *)0x0);
          *piVar5 = iVar2;
        }
        *(undefined2 *)(iVar1 + 0x6c) = 0;
        *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + 1;
        if ((uVar8 & 0x100000000) != 0) {
          *(ushort *)(iVar1 + 0x1e) = *(ushort *)(iVar1 + 0x1e) | 0x20;
        }
        uVar9 = FUN_ram_42053d72(*(undefined4 *)(iVar2 + 4));
        uVar3 = (int)uVar9 + (uint)*(ushort *)(iVar1 + 0x6a);
        *(short *)(iVar1 + 0x6a) = (short)(uVar3 * 0x10000 >> 0x10);
        if ((uVar3 & 0xffff) == 0) {
          return 0;
        }
        uVar9 = uVar9 & 0xffffffff00000000;
        if (*(int *)(iVar1 + 0x74) != 0) {
          return 0;
        }
        if (*(int *)(iVar1 + 0x70) != 0) {
          return 0;
        }
      }
    }
  }
  *(ushort *)(iVar1 + 0x1e) = *(ushort *)(iVar1 + 0x1e) | 0x80;
  return 0xffffffff;
}

