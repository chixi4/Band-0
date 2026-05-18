
undefined4 FUN_ram_420888fe(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 in_a5;
  undefined4 uStack00000088;
  
  uStack00000088 = in_a5;
  FUN_ram_4039c11e(param_1 + 0x380);
  (**(code **)(*(int *)(unaff_s0 + 0x174) + 0xc))(unaff_s1 + 4);
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc88c);
  FUN_ram_4208344a(4,&stack0x00000060,0x30);
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc8a8,*(undefined1 *)(*(int *)(unaff_s0 + 0x10) + 0x128),5);
  *(undefined1 *)(*(int *)(unaff_s0 + 0x10) + 0x128) = 5;
  *(undefined1 *)(unaff_s0 + 0x1d7) = 0;
  *(undefined1 *)(unaff_s1 + 0x33c) = 0;
  FUN_ram_4208830a();
  return 1;
}

