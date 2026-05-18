
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403993ce(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d194,0x3c072718,0x672);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pcVar8 = *(char **)(*(int *)(param_2 + 4) + 4);
  if (*pcVar8 != -0x78) {
    return 0;
  }
  if ((pcVar8[1] & 3U) == 3) {
    bVar1 = pcVar8[0x1e];
  }
  else {
    bVar1 = pcVar8[0x18];
  }
  uVar10 = bVar1 & 0xf;
  if ((bVar1 & 8) == 0) {
    puVar4 = *(uint **)((uVar10 + 0x98) * 4 + param_1 + 8);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    uVar7 = *puVar4;
    if ((uVar7 & 4) == 0) {
      return 0;
    }
    if (((*(ushort *)(pcVar8 + 0x16) & 0xf) == 0) && ((pcVar8[1] & 4U) == 0)) {
      uVar2 = *(ushort *)(pcVar8 + 0x16) >> 4;
      uVar5 = (uint)uVar2;
      if ((pcVar8[4] & 1U) != 0) {
        FUN_ram_42036558(puVar4,uVar5);
        return 0;
      }
      bVar3 = false;
      puVar4[5] = puVar4[5] + 1;
      if (((**(uint **)(param_2 + 0x24) & 0x10) != 0) && ((uVar7 & 0x40) != 0)) {
        *puVar4 = uVar7 & 0xffffffbf;
        bVar3 = true;
      }
      while( true ) {
        if ((ushort)puVar4[3] == uVar5) {
          if ((short)puVar4[2] != 0) {
            (*(code *)&SUB_ram_40011f80)(param_1,param_2);
            (*(code *)&SUB_ram_40011f88)(puVar4,param_1);
            return 1;
          }
          *(ushort *)(puVar4 + 3) = (ushort)((uVar5 + 1) * 0x100000 >> 0x14);
          return 0;
        }
        uVar9 = (uVar5 + 0x1000) - (uint)(ushort)puVar4[3];
        uVar7 = uVar9 & 0xfff;
        if (uVar7 < *(ushort *)((int)puVar4 + 0xe)) break;
        if ((uVar9 & 0x800) == 0) {
          (*(code *)&SUB_ram_40011f90)
                    (param_1,puVar4,(uVar5 + 0x1001) - (uint)*(ushort *)((int)puVar4 + 0xe) & 0xfff)
          ;
        }
        else if (bVar3) {
          (*(code *)&SUB_ram_40011f84)(param_1,puVar4);
          *(ushort *)(puVar4 + 3) = *(ushort *)((int)puVar4 + 10);
          if (((uVar5 + 0x1000) - (uint)*(ushort *)((int)puVar4 + 10) & 0x800) != 0) {
            *(ushort *)(puVar4 + 3) =
                 (short)(uVar5 + 0x1001) - *(short *)((int)puVar4 + 0xe) & 0xfff;
          }
          (*(code *)&SUB_ram_40011fa8)((char)puVar4[8],uVar10,(short)puVar4[3],0x40);
          bVar3 = false;
        }
        else {
          if (((**(uint **)(param_2 + 0x24) & 0x10) != 0) || ((*puVar4 & 0x40) == 0)) {
            _DAT_ram_3fcb3980 = _DAT_ram_3fcb3980 + 1;
            goto LAB_ram_4039945c;
          }
          (*(code *)&SUB_ram_40011f84)(param_1,puVar4);
          *(ushort *)(puVar4 + 3) = uVar2;
        }
      }
      iVar6 = uVar7 * 4;
      if (*(int *)(puVar4[6] + iVar6) == 0) {
        if ((short)puVar4[2] == 0) {
          (*(code *)&SUB_ram_40011fb4)(300000);
        }
        uVar2 = *(ushort *)(param_2 + 0x16);
        *(int *)(puVar4[6] + iVar6) = param_2;
        *(short *)(puVar4 + 2) = (short)puVar4[2] + 1;
        puVar4[1] = puVar4[1] + (uint)uVar2;
        return 1;
      }
    }
    else {
      FUN_ram_42033fd8(1,0x400,2,0x3c07f8dc);
    }
  }
  else {
    FUN_ram_42033fd8(1,0x400,2,0x3c07f8c4,uVar10);
  }
LAB_ram_4039945c:
  (*(code *)&SUB_ram_40011fa0)(param_2);
  return 1;
}

