//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRAVOutputDevice;

@interface MRPresentRouteAuthorizationStatusMessage : MRProtocolMessage
{
    MRAVOutputDevice *_route;
}

- (void).cxx_destruct;
- (unsigned long long)type;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) MRAVOutputDevice *route;
- (id)initWithRoute:(id)arg1 status:(int)arg2;

@end

