//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Quartz/PDFDocument.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MUPDFDocument : PDFDocument
{
    NSString *_unlockedWithPassword;
}

@property(copy) NSString *unlockedWithPassword; // @synthesize unlockedWithPassword=_unlockedWithPassword;
- (void).cxx_destruct;
- (BOOL)unlockWithPassword:(id)arg1;

@end
