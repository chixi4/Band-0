
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4208ce62(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                int param_6)

{
  int unaff_s0;
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000004;
  undefined1 uStack00000008;
  undefined1 uStack00000009;
  undefined1 uStack0000000a;
  undefined1 uStack0000000b;
  undefined1 in_stack_0000000c;
  
  uVar3 = *(undefined4 *)(param_4 + 4);
  if (param_5 == 0 && param_6 == 0) {
    _in_stack_0000000c = CONCAT11(1,in_stack_0000000c);
  }
  else {
    _in_stack_0000000c = (ushort)(param_5 << 8) | (ushort)((uint)param_5 >> 8) & 0xff;
    uStack00000009 = (undefined1)param_6;
    uStack0000000b = (undefined1)((uint)param_5 >> 0x10);
    uStack0000000a = (undefined1)((uint)param_5 >> 0x18);
    uStack00000008 = (undefined1)((uint)param_6 >> 8);
  }
  iVar1 = (*_DAT_ram_3fcc4290)
                    (param_2 + 0xa8,uVar3,
                     (uint)*(ushort *)(unaff_s0 + 0x14) + (uint)*(ushort *)(unaff_s0 + 0x16),0x18,
                     &stack0x00000008,0,&stack0x00000004,_DAT_ram_3fcc4290);
  if (iVar1 == 0) {
    FUN_ram_4207a038(1,0x40,1,&DAT_ram_3c0ff450);
  }
  else {
    FUN_ram_4039c11e(uVar3,iVar1,in_stack_00000004);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar1);
    puVar2 = *(uint **)(unaff_s0 + 0x24);
    *(short *)(unaff_s0 + 0x16) = *(short *)(unaff_s0 + 0x16) + 0x10;
    *puVar2 = *puVar2 & 0xfffffffe;
    *(ushort *)(puVar2 + 4) = (ushort)puVar2[4] & 0xf000 | 0x80;
  }
  return 0;
}

