
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039cc84(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = (*(code *)&SUB_ram_40011b20)();
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = (*(code *)&SUB_ram_40011c38)(param_1);
    uVar3 = 0xfffffffe;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 0x1c);
      if ((**(uint **)(iVar2 + 0x24) & 0x40000) == 0) {
        if ((iVar4 != 0) && ((*(char *)(iVar4 + 0x83) == '\x01' || (DAT_ram_3fcc4642 != '\0')))) {
          if ((*(ushort *)(gp + 0x6fc) < *(ushort *)(iVar2 + 0x16)) &&
             ((((**(uint **)(iVar2 + 0x24) & 2) == 0 &&
               (iVar4 = (*(code *)&SUB_ram_40011c10)(param_1), iVar4 != 0)) &&
              (iVar4 = FUN_ram_42092eac(iVar2), iVar4 == 0)))) {
            (*(code *)&SUB_ram_40011c14)(param_1);
          }
        }
      }
      else if (((iVar4 == 0) || (iVar4 = (*(code *)&SUB_ram_40011cc0)(), iVar4 == 0)) ||
              ((iVar4 = (*(code *)&SUB_ram_40011cd0)
                                  (*(undefined4 *)(iVar2 + 0x1c),
                                   *(uint *)(*(int *)(iVar2 + 0x24) + 4) & 0xf), iVar4 == 0 ||
               (iVar4 = FUN_ram_4039c99c(iVar2), iVar4 == 0)))) {
        (*(code *)&SUB_ram_40011bc8)(iVar2);
        iVar4 = *(int *)(iVar2 + 0x20);
        if (iVar4 == 0) {
          *(undefined4 *)
           (((*(uint *)(*(int *)(iVar2 + 0x24) + 0x10) >> 0x14 & 0xf) + 1) * 0x30 +
            _DAT_ram_3fcdfdec + 4) = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0x20) = 0;
          *(undefined4 *)(*(int *)(iVar2 + 8) + 8) = 0;
          iVar7 = iVar4;
          do {
            iVar6 = iVar7;
            iVar7 = *(int *)(iVar6 + 0x20);
            *(undefined4 *)(*(int *)(iVar6 + 8) + 8) = 0;
            iVar1 = _DAT_ram_3fcdfdec;
          } while (iVar7 != 0);
          uVar8 = *(uint *)(*(int *)(iVar2 + 0x24) + 0x10) >> 0x14 & 0xf;
          iVar5 = uVar8 * 0x30 + _DAT_ram_3fcdfdec;
          iVar7 = *(int *)(iVar5 + 0x20);
          *(int *)(iVar6 + 0x20) = iVar7;
          if (iVar7 == 0) {
            *(int *)(iVar5 + 0x24) = iVar6 + 0x20;
          }
          *(int *)(uVar8 * 0x30 + iVar1 + 0x20) = iVar4;
          *(undefined4 *)(iVar1 + (uVar8 + 1) * 0x30 + 4) = 0;
        }
      }
      FUN_ram_4039c694(iVar2);
      FUN_ram_4039cf10(iVar2,param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

