//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OADOle : NSObject
{
    BOOL mIconic;
    NSString *mCLSID;
    NSString *mAnsiUserType;
    NSString *mAnsiClipboardFormatName;
    unsigned int mWinClipboardFormat;
    NSString *mMacClipboardFormat;
    NSString *mAnsiProgID;
    NSString *mUnicodeUserType;
    NSString *mUnicodeClipboardFormatName;
    NSString *mUnicodeProgID;
    id mObject;
}

+ (BOOL)isCLSIDSupported:(id)arg1;
+ (BOOL)isProgIDMathType:(id)arg1;
+ (BOOL)isProgIDChart:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)setObject:(id)arg1;
- (id)object;
- (void)setUnicodeProgID:(id)arg1;
- (id)unicodeProgID;
- (void)setUnicodeClipboardFormatName:(id)arg1;
- (id)unicodeClipboardFormatName;
- (void)setUnicodeUserType:(id)arg1;
- (id)unicodeUserType;
- (void)setAnsiProgID:(id)arg1;
- (id)ansiProgID;
- (void)setMacClipboardFormat:(id)arg1;
- (id)macClipboardFormat;
- (void)setWinClipboardFormat:(unsigned int)arg1;
- (unsigned int)winClipboardFormat;
- (void)setAnsiClipboardFormatName:(id)arg1;
- (id)ansiClipboardFormatName;
- (void)setAnsiUserType:(id)arg1;
- (id)ansiUserType;
- (void)setCLSID:(id)arg1;
- (id)CLSID;
- (void)setIconic:(BOOL)arg1;
- (BOOL)iconic;
- (id)init;

@end

