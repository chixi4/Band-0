
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203da3a(void)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  
  do {
    puVar2 = *(ushort **)(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x24);
    while( true ) {
      if (puVar2 == (ushort *)0x0) {
        return;
      }
      puVar8 = puVar2 + -8;
      (**(code **)(_DAT_ram_3fcdfecc + 0xb60))(0,1);
      (**(code **)(_DAT_ram_3fcdfecc + 0xb54))(0xb001,*puVar2,puVar8);
      (**(code **)(_DAT_ram_3fcdfecc + 0xb60))(0,0);
      (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
      iVar1 = _DAT_ram_3fcdfec4;
      iVar7 = *(int *)(_DAT_ram_3fcdff6c + 0x1c);
      iVar6 = *(int *)(*(int *)(iVar7 + 0x24) + 4);
      *(int *)(iVar7 + 0x24) = iVar6;
      if (iVar6 == 0) {
        *(int *)(iVar7 + 0x28) = iVar7 + 0x24;
      }
      (**(code **)(iVar1 + 0xa4))();
      uVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x80c))(*(undefined4 *)(puVar2 + -8));
      uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x80c))(*(int *)(puVar2 + -8) + 2);
      (**(code **)(_DAT_ram_3fcdfecc + 0x8d8))(puVar8,4);
      uVar5 = (uint)*puVar2;
      if (((uVar5 == uVar4) && ((uVar3 & 0x3000) < 0x1001)) && (uVar5 != 0)) break;
      (**(code **)(_DAT_ram_3fcdfecc + 0x904))(puVar8);
      puVar2 = *(ushort **)(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x24);
    }
    (**(code **)(_DAT_ram_3fcdfecc + 0x3dc))
              (puVar8,uVar3,uVar5,uVar5,uVar3 & 0x3000,*(code **)(_DAT_ram_3fcdfecc + 0x3dc));
  } while( true );
}

