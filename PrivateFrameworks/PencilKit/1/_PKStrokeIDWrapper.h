//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/CHStrokeIdentifier-Protocol.h>

@class NSString;

@interface _PKStrokeIDWrapper : NSObject <CHStrokeIdentifier>
{
    struct _PKStrokeID _strokeID;
}

@property(nonatomic) struct _PKStrokeID strokeID; // @synthesize strokeID=_strokeID;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithStrokeID:(struct _PKStrokeID)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

