//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NetworkExtension/NEFileHandle.h>

@class NSData, NSNumber;

@interface NEFlowDivertFileHandle : NEFileHandle
{
    NSNumber *_controlUnit;
    NSData *_keyMaterial;
}

@property(readonly) NSData *keyMaterial; // @synthesize keyMaterial=_keyMaterial;
@property(readonly) NSNumber *controlUnit; // @synthesize controlUnit=_controlUnit;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)description;
- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)getUnitForSocket:(int)arg1;
- (id)initFlowDivertDataSocket;
- (id)initFlowDivertControlSocketDisableAppMap:(BOOL)arg1;
- (id)initFlowDivertControlSocket;

@end

