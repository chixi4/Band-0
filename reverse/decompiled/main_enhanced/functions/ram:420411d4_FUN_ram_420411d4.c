
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420411d4(void)

{
  uint *unaff_s0;
  int unaff_s1;
  uint uVar1;
  undefined4 extraout_a2;
  int in_a3;
  code *pcVar2;
  int in_a5;
  int iVar3;
  
  uVar1 = unaff_s0[10] >> 10 & 3;
  unaff_s0[10] = unaff_s0[10] & 0xffffff3f | uVar1 << 6;
  uVar1 = (**(code **)(in_a5 + in_a3 + -0x5f0))(uVar1,0);
  unaff_s0[10] = unaff_s0[10] & 0xfffffff3 | (uVar1 & 3) << 2;
  iVar3 = *(int *)(unaff_s1 + -0x134);
  *unaff_s0 = *unaff_s0 | 0x2000000;
  (**(code **)(iVar3 + 0x440))();
  if ((*(byte *)(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0xf) & 2) == 0) {
    (**(code **)(*(int *)(unaff_s1 + -0x134) + 0x3e0))();
    uVar1 = unaff_s0[10] & 0x30;
    if (((uVar1 == 0x30) || ((unaff_s0[10] & 0xc0) == 0xc0)) &&
       ((*(byte *)((int)unaff_s0 + 0x55) & 8) == 0)) {
      iVar3 = *(int *)(unaff_s1 + -0x134);
      *(byte *)((int)unaff_s0 + 0x55) = *(byte *)((int)unaff_s0 + 0x55) | 8;
      pcVar2 = *(code **)(iVar3 + 0x890);
      *(undefined2 *)(unaff_s0 + 6) = 0x4290;
      (*pcVar2)(0,unaff_s0 + 6,extraout_a2,uVar1,pcVar2);
      (**(code **)(*(int *)(unaff_s1 + -0x134) + 0x424))();
      return 0;
    }
  }
  return 0;
}

