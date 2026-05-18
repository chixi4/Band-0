
/* WARNING: Removing unreachable block (ram,0x40392cd0) */

int FUN_ram_40392c70(int param_1)

{
  bool bVar1;
  ulonglong *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  
  FUN_ram_40392b7e();
  iVar8 = 0;
  do {
    puVar2 = *(ulonglong **)(&DAT_ram_3fcc5264 + param_1 * 4);
    uVar12 = FUN_ram_403919ae();
    iVar7 = (int)(uVar12 >> 0x20);
    uVar3 = (uint)uVar12;
    if (puVar2 == (ulonglong *)0x0) {
      if (iVar8 != 0) {
        uVar6 = 0xffffffff;
        iVar11 = -1;
LAB_ram_40392d76:
        FUN_ram_403919d6(uVar6,iVar11,param_1);
      }
LAB_ram_40392d8c:
      FUN_ram_40392b6e();
      return iVar8;
    }
    iVar11 = *(int *)((int)puVar2 + 4);
    uVar6 = (uint)*puVar2;
    if (uVar12 < *puVar2) {
      if ((param_1 == 0) || (iVar8 != 0)) goto LAB_ram_40392d76;
      goto LAB_ram_40392d8c;
    }
    iVar8 = (int)puVar2[3];
    if (iVar8 != 0) {
      *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)((int)puVar2 + 0x1c);
    }
    **(int **)((int)puVar2 + 0x1c) = iVar8;
    if ((int)puVar2[2] == -0xf21e1e2) {
      thunk_FUN_ram_40390634(puVar2);
    }
    else {
      uVar9 = (uint)puVar2[1];
      uVar10 = *(uint *)((int)puVar2 + 0xc) & 0xffffff;
      if (uVar9 == 0 && uVar10 == 0) {
        *(undefined4 *)puVar2 = 0;
        *(undefined4 *)((int)puVar2 + 4) = 0;
      }
      else {
        if (((*(byte *)((int)puVar2 + 0xf) & 2) == 0) ||
           (iVar8 = (*(code *)&SUB_ram_400109f0)
                              (uVar3 - uVar6,(iVar7 - iVar11) - (uint)(uVar3 < uVar3 - uVar6),uVar9,
                               uVar10), iVar8 < 2)) {
          uVar3 = uVar6 + uVar9;
          bVar1 = uVar3 < uVar6;
        }
        else {
          uVar3 = uVar3 + uVar9;
          bVar1 = uVar3 < uVar9;
          iVar11 = iVar7;
        }
        *(uint *)puVar2 = uVar3;
        *(uint *)((int)puVar2 + 4) = (uint)bVar1 + uVar10 + iVar11;
        FUN_ram_40392bfc(puVar2,1);
      }
      uVar5 = *(undefined4 *)((int)puVar2 + 0x14);
      pcVar4 = *(code **)(puVar2 + 2);
      FUN_ram_40392b6e();
      (*pcVar4)(uVar5);
      FUN_ram_40392b7e();
    }
    iVar8 = 1;
  } while( true );
}

