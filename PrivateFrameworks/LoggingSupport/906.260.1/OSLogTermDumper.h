//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OSLogTermDumper : NSObject
{
    struct os_trace_blob_s _ob;
    unsigned short _last_attrs;
    unsigned char _ob_slop[1];
    BOOL _fancy;
    int _fd;
    BOOL _vis;
    unsigned char _colorMode;
    unsigned short _cur_attrs;
}

@property(nonatomic) unsigned short style; // @synthesize style=_cur_attrs;
@property(readonly, nonatomic) BOOL isFancy; // @synthesize isFancy=_fancy;
@property(readonly, nonatomic) unsigned char colorMode; // @synthesize colorMode=_colorMode;
- (void)putUUID:(unsigned char [16])arg1;
- (void)puts:(const char *)arg1;
- (unsigned int)format:(const char *)arg1;
- (void)pad:(int)arg1 count:(unsigned long long)arg2;
- (void)writeln;
- (void)hexdump:(const void *)arg1 length:(unsigned long long)arg2;
- (unsigned int)vformat:(const char *)arg1 args:(struct __va_list_tag [1])arg2;
- (void)putc:(int)arg1;
- (void)write:(const void *)arg1 size:(unsigned long long)arg2;
- (void)flush:(BOOL)arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)_resetAttrsForNewline;
- (void)_flushAttrs;
- (void)startPager;
- (void)dealloc;
- (void)close;
- (id)initWithFd:(int)arg1 colorMode:(unsigned char)arg2;
- (id)init;
- (void)resetStyle;
@property(nonatomic) unsigned char fgColor;
@property(nonatomic) unsigned char bgColor;
@property(nonatomic, getter=isUnderlined) BOOL underline;
@property(nonatomic, getter=isOblique) BOOL oblique;
@property(nonatomic, getter=isBold) BOOL bold;

@end

