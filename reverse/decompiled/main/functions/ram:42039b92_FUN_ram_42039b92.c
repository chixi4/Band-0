
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42039b92(void)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  byte abStack_31 [13];
  
  abStack_31[0] = 0;
  pcVar2 = *(code **)(_DAT_ram_3fcdfec8 + 0xc);
  iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  iVar4 = (*pcVar2)((uint)*(ushort *)(iVar4 + 0x38) << 2);
  if (iVar4 != 0) {
    iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    (*(code *)&SUB_ram_40010488)(iVar4,0,(uint)*(ushort *)(iVar5 + 0x38) << 2);
    (**(code **)(_DAT_ram_3fcdfecc + 0xa48))(iVar4,abStack_31);
    if (abStack_31[0] != 0) {
      uVar3 = 0;
      do {
        puVar6 = *(uint **)(uVar3 * 4 + iVar4);
        if (*(char *)((int)puVar6 + 0xb) == '\x02') {
          bVar1 = *(byte *)(_DAT_ram_3fcdff6c + 0xc);
          if (bVar1 < *(byte *)((int)puVar6 + 0x4d)) {
LAB_ram_42039c5c:
            *puVar6 = *puVar6 | 0x80000000;
          }
          else {
            *(byte *)((int)puVar6 + 0x4e) = *(byte *)((int)puVar6 + 0x4d);
            *(byte *)((int)puVar6 + 0x4d) = bVar1;
          }
        }
        else if (*(char *)((int)puVar6 + 0xb) == '\x01') {
          bVar1 = *(byte *)(_DAT_ram_3fcdff6c + 0xc);
          if (bVar1 < (byte)puVar6[0x13]) goto LAB_ram_42039c5c;
          *(byte *)((int)puVar6 + 0x4e) = (byte)puVar6[0x13];
          *(byte *)(puVar6 + 0x13) = bVar1;
        }
        uVar3 = uVar3 + 1 & 0xff;
        (**(code **)(_DAT_ram_3fcdfecc + 0x44c))(puVar6,10);
      } while (uVar3 < abStack_31[0]);
    }
    (**(code **)(_DAT_ram_3fcdfec8 + 0x10))(iVar4);
  }
  return;
}

