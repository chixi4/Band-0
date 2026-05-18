
void FUN_ram_4202717a(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                     undefined2 param_5)

{
  undefined4 uVar1;
  undefined2 uStack00000004;
  undefined2 uStack00000006;
  undefined2 uStack00000008;
  undefined2 uStack0000000a;
  undefined2 uStack0000000c;
  undefined2 uStack0000000e;
  
  uStack0000000e = *(undefined2 *)(param_3 + 2);
  uStack00000006 = (undefined2)*(undefined4 *)(param_3 + 8);
  uStack00000008 = (undefined2)((uint)*(undefined4 *)(param_3 + 8) >> 0x10);
  uStack0000000a = (undefined2)*(undefined4 *)(param_3 + 0xc);
  uStack0000000c = (undefined2)((uint)*(undefined4 *)(param_3 + 0xc) >> 0x10);
  uStack00000004 = param_5;
  FUN_ram_4039c11e(&stack0x00000010,param_3 + 0x10);
  uVar1 = FUN_ram_420332b4(0x2019,&stack0x00000004,0x1c,0,0);
  *param_2 = uVar1;
  return;
}

