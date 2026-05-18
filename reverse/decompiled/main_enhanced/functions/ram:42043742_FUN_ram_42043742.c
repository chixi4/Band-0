
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42043742(byte *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  code *pcVar7;
  
  if (param_2 == 0x27) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x1e4))();
    if (iVar1 == 0) {
      return 0xc;
    }
    if (*(byte *)(*_DAT_ram_3fcdfef4 + 1) <= *(byte *)(*_DAT_ram_3fcdfef4 + 2)) {
      return 7;
    }
    pbVar5 = param_1 + 1;
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x1a0))(pbVar5,*param_1);
    if ((iVar1 == 0) &&
       (iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x70))(pbVar5,*param_1), iVar1 != 0)) {
      puVar2 = (uint *)(**(code **)(_DAT_ram_3fcdfecc + 0x848))(_DAT_ram_3fcdfef4[1]);
      if (puVar2 == (uint *)0x0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0x292,&DAT_ram_3c0f6f30,0,0);
      }
      (*(code *)&SUB_ram_40010488)(puVar2,0,0x40);
      pbVar6 = param_1 + 7;
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x1dc))(pbVar6);
      if (iVar1 == 0) {
        puVar2[1] = 0;
        *_DAT_ram_3fcdfef0 = (uint)puVar2;
        _DAT_ram_3fcdfef0 = puVar2 + 1;
      }
      else {
        iVar1 = *_DAT_ram_3fcdfef4;
        iVar4 = *(int *)(iVar1 + 4);
        if (iVar4 == 0) {
          puVar2[1] = (uint)_DAT_ram_3fcdfeec;
          if (_DAT_ram_3fcdfeec == (uint *)0x0) {
            _DAT_ram_3fcdfef0 = puVar2 + 1;
          }
          _DAT_ram_3fcdfeec = puVar2;
          *(uint **)(iVar1 + 4) = puVar2;
        }
        else {
          uVar3 = *(uint *)(iVar4 + 4);
          puVar2[1] = uVar3;
          if (uVar3 == 0) {
            _DAT_ram_3fcdfef0 = puVar2 + 1;
            *(uint **)(iVar4 + 4) = puVar2;
          }
          else {
            *(uint **)(iVar4 + 4) = puVar2;
          }
          *(uint **)(iVar1 + 4) = puVar2;
        }
      }
      uVar3 = *puVar2;
      *puVar2 = uVar3 & 0xffeb7ffb | 0x148004;
      *puVar2 = uVar3 & 0xffea7ffb | 0x148004 | (*param_1 & 1) << 0x10;
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x1dc))(pbVar6);
      if (iVar1 != 0) {
        pcVar7 = *(code **)(_DAT_ram_3fcdfecc + 0x83c);
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x230))(puVar2);
        (*pcVar7)(puVar2 + iVar1 + 2,pbVar6,0x10);
        *puVar2 = *puVar2 | 0x20000;
        (**(code **)(_DAT_ram_3fcdfecc + 0x1bc))(puVar2,0);
      }
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x1dc))(param_1 + 0x17);
      if (iVar1 != 0) {
        pcVar7 = *(code **)(_DAT_ram_3fcdfecc + 0x83c);
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x224))(puVar2);
        (*pcVar7)(puVar2 + iVar1 + 2,param_1 + 0x17,0x10);
        *puVar2 = *puVar2 & 0xfffffffc | 1;
        (**(code **)(_DAT_ram_3fcdfecc + 0x1bc))(puVar2,1);
      }
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x22c))(puVar2);
      FUN_ram_4039c11e(puVar2 + iVar1 + 2,pbVar5,6);
      if (DAT_ram_3fcdfe68 == '\0') {
        *(byte *)((int)puVar2 + 1) = *(byte *)((int)puVar2 + 1) & 0xe3 | 0xc;
      }
      else {
        *(byte *)((int)puVar2 + 1) = *(byte *)((int)puVar2 + 1) & 0xe3 | 0x10;
      }
      *(char *)(*_DAT_ram_3fcdfef4 + 2) = *(char *)(*_DAT_ram_3fcdfef4 + 2) + '\x01';
      (**(code **)(_DAT_ram_3fcdfed0 + 0x4f0))(_DAT_ram_3fcdfeec);
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x250))(pbVar5,*param_1);
      if (iVar1 != 0) {
        *puVar2 = *puVar2 | 0x200;
      }
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x684))(pbVar5,*(ushort *)((int)puVar2 + 2) & 1);
      if (-1 < iVar1) {
        *puVar2 = *puVar2 | 0x100;
      }
      iVar1 = *_DAT_ram_3fcdfef4;
      if (*(char *)(iVar1 + 2) != '\x01') {
        return 0;
      }
      (**(code **)(_DAT_ram_3fcdfec4 + 100))(iVar1 + 0xc,*(undefined4 *)(iVar1 + 8));
      return 0;
    }
  }
  return 0x12;
}

