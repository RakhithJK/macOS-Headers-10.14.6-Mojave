//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVCustomControlsLayoutGuideProviding-Protocol.h>

@class NSString, UILayoutGuide;
@protocol SVVideoViewControllerProviding;

@interface SVCustomControlsLayoutGuideProvider : NSObject <SVCustomControlsLayoutGuideProviding>
{
    UILayoutGuide *_accessoryBarLayoutGuide;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property(retain, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(retain, nonatomic) UILayoutGuide *accessoryBarLayoutGuide; // @synthesize accessoryBarLayoutGuide=_accessoryBarLayoutGuide;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILayoutGuide *unobscuredTopAreaLayoutGuide; // @dynamic unobscuredTopAreaLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *animatedUnobscuredCenterAreaLayoutGuide; // @dynamic animatedUnobscuredCenterAreaLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *unobscuredCenterAreaLayoutGuide; // @dynamic unobscuredCenterAreaLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *volumeControlsAreaLayoutGuide; // @dynamic volumeControlsAreaLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *displayModeControlsAreaLayoutGuide; // @dynamic displayModeControlsAreaLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *transportControlsAreaLayoutGuide; // @dynamic transportControlsAreaLayoutGuide;
- (id)initWithViewControllerProvider:(id)arg1 accessoryBarView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

