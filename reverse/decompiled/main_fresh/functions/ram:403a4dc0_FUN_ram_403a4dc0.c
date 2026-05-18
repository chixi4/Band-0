
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403a4dc0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_a4;
  byte bVar5;
  code *pcVar6;
  int iVar7;
  undefined1 auStack_38 [12];
  int iStack_2c;
  
  pbVar1 = *(byte **)(param_1 + 0xc);
  if (pbVar1 == (byte *)0x0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x6f,&DAT_ram_3c0f6cfc,0,0,in_a4,*(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  pcVar6 = *(code **)(_DAT_ram_3fcdfecc + 0xf8);
  *(byte **)(_DAT_ram_3fcdfedc + 0xc) = pbVar1;
  (*pcVar6)(6);
  (**(code **)(_DAT_ram_3fcdfed0 + 0x464))
            (pbVar1[0x1a],*(undefined4 *)(pbVar1 + 0x34),*(undefined4 *)(pbVar1 + 0x30));
  (**(code **)(_DAT_ram_3fcdfed0 + 0x42c))();
  (**(code **)(_DAT_ram_3fcdfed0 + 1000))();
  (**(code **)(_DAT_ram_3fcdfed0 + 0x418))(pbVar1[0x1c]);
  iVar7 = (uint)*(byte *)(_DAT_ram_3fcdff70 + 4) + *(int *)(param_1 + 4);
  if (_DAT_ram_3fcdfe70 != 0) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x2c0))(pbVar1,0);
  }
  iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x4b8))(iVar7,*(undefined1 *)(param_1 + 2));
  if (iVar2 == 6) {
    iVar2 = 0;
    iVar4 = (**(code **)(_DAT_ram_3fcdfed0 + 0x56c))();
    if (0 < iVar7 - iVar4) {
      iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x580))();
      iVar2 = (uint)*(byte *)(param_1 + 2) + iVar2;
    }
LAB_ram_403a4ec0:
    (*(code *)&SUB_ram_40010488)(auStack_38,0,0x18);
    auStack_38[0] = 0xd;
    if ((*pbVar1 & 2) == 0) {
LAB_ram_403a4f0e:
      iVar2 = iVar2 + *(int *)(pbVar1 + 0x3c) * 2;
    }
    else {
      if ((pbVar1[1] & 4) == 0) {
        iVar2 = iVar2 + 0x1e;
      }
      else {
        iVar2 = iVar2 + 300;
      }
      if ((pbVar1[1] & 2) == 0) goto LAB_ram_403a4f0e;
    }
    iStack_2c = iVar2;
    iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x4a0))(auStack_38);
    if (iVar2 == 0) {
      bVar5 = pbVar1[1] & 0xfe;
      pbVar1[1] = bVar5;
      uVar3 = 0;
      goto LAB_ram_403a4ea0;
    }
  }
  else if (iVar2 == 0) {
    iVar2 = 0;
    goto LAB_ram_403a4ec0;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x500f,iVar2);
  (**(code **)(_DAT_ram_3fcdfecc + 0x90))(pbVar1 + 0x68);
  (**(code **)(_DAT_ram_3fcdfed0 + 0x298))();
  bVar5 = pbVar1[1];
  uVar3 = 1;
LAB_ram_403a4ea0:
  if ((bVar5 & 2) != 0) {
    pbVar1[1] = bVar5 & 0xfd;
  }
  return uVar3;
}

