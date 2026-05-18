
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203c010(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  code *pcVar6;
  
  puVar3 = (undefined4 *)
           (**(code **)(_DAT_ram_3fcdfecc + 0x848))(*(undefined4 *)(_DAT_ram_3fcdff64 + 0x34));
  if (puVar3 == (undefined4 *)0x0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x7015,1);
    return 0xffffffff;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0xa04))(0x7016,param_3,param_5,param_4);
  iVar1 = _DAT_ram_3fcdfecc;
  *(char *)(puVar3 + 2) = (char)param_5;
  *(char *)((int)puVar3 + 9) = (char)param_4;
  pcVar6 = *(code **)(iVar1 + 0x8f0);
  puVar3[1] = 0;
  (*pcVar6)(param_2,param_3,param_4,(int)puVar3 + 10);
  if (param_5 != 3) goto LAB_ram_4203c090;
  bVar5 = *(byte *)((int)puVar3 + 10);
  *(byte *)(puVar3 + 1) = bVar5;
  *(byte *)((int)puVar3 + 5) = *(byte *)((int)puVar3 + 5) | 2;
  if (bVar5 == 10) {
    if (*(char *)(param_1 + 0xb) != '\x01') goto LAB_ram_4203c090;
  }
  else {
    if (bVar5 < 0xb) {
      if (bVar5 != 3) {
        if (bVar5 != 4) goto LAB_ram_4203c090;
        bVar5 = 9;
      }
      *(byte *)(param_1 + 0x118) = bVar5;
      goto LAB_ram_4203c090;
    }
    if (bVar5 == 0x16) {
      if (*(char *)(param_1 + 0xb) == '\x02') {
        uVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x434))(*(uint *)(param_1 + 0x28) >> 0x12 & 7);
        *(undefined1 *)(param_1 + 0x2e) = uVar2;
      }
      goto LAB_ram_4203c090;
    }
    if (bVar5 == 0x18) {
      uVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x434))(*(undefined1 *)(puVar3 + 3));
      *(undefined1 *)(param_1 + 0x2e) = uVar2;
      goto LAB_ram_4203c090;
    }
    if ((bVar5 != 0xb) || (*(char *)(param_1 + 0xb) != '\x02')) goto LAB_ram_4203c090;
  }
  *(undefined1 *)(param_1 + 0x118) = 5;
LAB_ram_4203c090:
  if ((uint)*(ushort *)(param_2 + 0x10) <= (param_3 + param_4 & 0xffffU)) {
    *(byte *)((int)puVar3 + 5) = *(byte *)((int)puVar3 + 5) | 1;
  }
  (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
  iVar1 = _DAT_ram_3fcdfec4;
  puVar4 = *(undefined4 **)(param_1 + 0xd8);
  *puVar3 = 0;
  pcVar6 = *(code **)(iVar1 + 0xa4);
  *puVar4 = puVar3;
  *(undefined4 **)(param_1 + 0xd8) = puVar3;
  (*pcVar6)();
  return 0;
}

