
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42044a5a(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 auStack_28 [16];
  
  bVar5 = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 0xf7 | 2;
  *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) = bVar5;
  FUN_ram_42033fd8(1,8,5,0x3c07f200,bVar5,*param_1,param_1[1],param_1,param_2);
  iVar4 = FUN_ram_42033ada(*param_1);
  if (iVar4 == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07dcc8,0x3c072f20,0x237);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((((*_DAT_ram_3fcdfb20 & 0x4000) != 0) || ((*(uint *)(iVar4 + 8) & 0x200) != 0)) ||
     (iVar4 = FUN_ram_420434ba(*param_1), iVar4 == 0)) {
    FUN_ram_42033fd8(1,8,5,0x3c07f23c);
    return;
  }
  *(byte *)((int)_DAT_ram_3fcdfb20 + 0x9a) = (byte)(*_DAT_ram_3fcdfb20 >> 0xd) & 1;
  (*(code *)&SUB_ram_40011fd0)(0,auStack_28);
  puVar2 = _DAT_ram_3fcdfb20;
  while( true ) {
    uVar8 = (uint)*(byte *)((int)puVar2 + 0x9a);
    if (1 < uVar8) {
      return;
    }
    cVar1 = *(char *)((int)puVar2 + uVar8 + 0x98);
    if (cVar1 != '\0') break;
    *(byte *)((int)puVar2 + 0x9a) = *(byte *)((int)puVar2 + 0x9a) + 1;
  }
  puVar3 = puVar2 + 0x27;
  if (*(char *)((int)puVar2 + 0xa2) == '\0') {
    puVar3 = (uint *)0x3c078fac;
  }
  if (cVar1 == '\x02') {
    FUN_ram_42033fd8(1,8,5,0x3c07f358);
    FUN_ram_420330b2(*(undefined4 *)(_DAT_ram_3fcb4f84 + 0xe8),auStack_28,puVar3,puVar3,0,0,1,0);
    if (_DAT_ram_3fcb51d8 == 0) goto LAB_ram_42044c3e;
    uVar7 = 0;
    puVar6 = (uint *)0x0;
  }
  else {
    if (cVar1 != '\x01') goto LAB_ram_42044c3e;
    if (puVar2[uVar8 * 9 + 0x14] == 0) goto LAB_ram_42044c3e;
    puVar6 = puVar2 + uVar8 * 9 + 0x15;
    FUN_ram_42033fd8(1,8,5,0x3c07f368,puVar6);
    FUN_ram_420330b2(*(undefined4 *)(_DAT_ram_3fcb4f84 + 0xe8),auStack_28,puVar3,puVar3,puVar6,
                     (char)puVar2[uVar8 * 9 + 0x14],1,0);
    if (_DAT_ram_3fcb51d8 == 0) goto LAB_ram_42044c3e;
    FUN_ram_42033fd8(1,8,5,0x3c07f380,puVar6);
    uVar7 = (undefined1)puVar2[uVar8 * 9 + 0x14];
  }
  FUN_ram_420330b2(*(undefined4 *)(_DAT_ram_3fcb4f84 + 0xe8),auStack_28,puVar3,puVar3,puVar6,uVar7,1
                   ,1);
LAB_ram_42044c3e:
  *(char *)((int)_DAT_ram_3fcdfb20 + 0x9a) = *(char *)((int)_DAT_ram_3fcdfb20 + 0x9a) + '\x01';
  return;
}

