
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205981a(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_stack_0000000c;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    return;
  }
  FUN_ram_42058e08(iVar2,1);
  iVar3 = FUN_ram_420591cc(param_1,iVar2,3,(int)&stack0x0000000c + 2);
  if (iVar3 != 0) {
    iVar11 = *(int *)(iVar3 + 4);
    iVar9 = iVar11 + 0xf0;
    uVar4 = FUN_ram_42058e58(in_stack_0000000c._2_2_,iVar9,0x39,2);
    in_stack_0000000c._2_2_ = (undefined2)uVar4;
    uVar4 = FUN_ram_42058e1e(uVar4,iVar9,*(undefined2 *)(param_1 + 0x30));
    in_stack_0000000c._2_2_ = (undefined2)uVar4;
    uVar4 = FUN_ram_42058e58(uVar4,iVar9,0x32,4);
    in_stack_0000000c._2_2_ = (undefined2)uVar4;
    uVar10 = 0;
    uVar5 = FUN_ram_420523b8(*(undefined4 *)(iVar2 + 0x2c));
    uVar4 = FUN_ram_42058e90(uVar4,iVar9,uVar5);
    in_stack_0000000c._2_2_ = (undefined2)uVar4;
    uVar4 = FUN_ram_42058e58(uVar4,iVar9,0x36,4);
    in_stack_0000000c._2_2_ = (undefined2)uVar4;
    uVar5 = FUN_ram_420523b8(*(undefined4 *)(iVar2 + 0x28));
    uVar4 = FUN_ram_42058e90(uVar4,iVar9,uVar5);
    in_stack_0000000c._2_2_ = (undefined2)uVar4;
    uVar6 = FUN_ram_42058e58(uVar4,iVar9,0x37,4);
    in_stack_0000000c._2_2_ = (undefined2)uVar6;
    bVar1 = false;
    iVar8 = 0;
    do {
      if (0x44 < (uVar6 & 0xffff)) {
        if (bVar1) {
          in_stack_0000000c._2_2_ = (undefined2)uVar10;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      uVar7 = (uVar6 & 0xffff) + 1;
      *(undefined1 *)(iVar11 + uVar6 + 0xf0) = (&DAT_ram_3c0f7588)[iVar8];
      iVar8 = iVar8 + 1;
      uVar10 = uVar7 & 0xffff;
      uVar6 = uVar6 + 1;
      bVar1 = true;
    } while (iVar8 != 4);
    in_stack_0000000c._2_2_ = (undefined2)(uVar7 * 0x10000 >> 0x10);
    in_stack_0000000c._2_2_ = FUN_ram_42059468(uVar10,iVar9,*(undefined4 *)(param_1 + 0x2c));
    FUN_ram_4205c572(param_1,1,iVar11,(int)&stack0x0000000c + 2);
    FUN_ram_42058eee(in_stack_0000000c._2_2_,iVar9,iVar3);
    FUN_ram_42058a7e(_DAT_ram_3fcc5340,iVar3,&DAT_ram_3c0f758c,0x43,param_1,&DAT_ram_3c0f7590);
    FUN_ram_42053ac4(iVar3);
  }
  if (*(byte *)(iVar2 + 6) != 0xff) {
    uVar6 = *(byte *)(iVar2 + 6) + 1;
    *(char *)(iVar2 + 6) = (char)uVar6;
    if ((uVar6 & 0xff) < 5) {
      uVar6 = (uint)((1 << (uVar6 & 0x1f)) * 0xfa0000) >> 0x10;
      goto LAB_ram_4205999c;
    }
  }
  uVar6 = 4000;
LAB_ram_4205999c:
  *(uint *)(iVar2 + 0xc) = (uVar6 + 499 & 0xffff) / 500;
  if (*(char *)(iVar2 + 8) == '\0') {
    FUN_ram_420585b0(500,0x4204a58e,param_1);
    *(undefined1 *)(iVar2 + 8) = 1;
  }
  return;
}

