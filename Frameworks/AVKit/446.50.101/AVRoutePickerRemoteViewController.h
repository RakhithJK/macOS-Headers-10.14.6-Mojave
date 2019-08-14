//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import <AVKit/AVRoutePickerViewHostInterface-Protocol.h>

@protocol AVRoutePickerViewRemoteViewControllerDelegate;

@interface AVRoutePickerRemoteViewController : NSRemoteViewController <AVRoutePickerViewHostInterface>
{
    id <AVRoutePickerViewRemoteViewControllerDelegate> _delegate;
}

+ (void)requestViewControllerWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <AVRoutePickerViewRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)serviceReadyForDisplay;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)stopDiscoveringAudioRoutes;
- (void)startDiscoveringAudioRoutes;

@end

