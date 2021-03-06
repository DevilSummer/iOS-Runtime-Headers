/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollController : NSObject <ADPlayerDelegate, ADPrerollViewDelegate> {
    ADPlayer *_adPlayer;
    AVPlayerViewController *_avPlayerViewController;
    id /* block */ _completionHandler;
    BOOL _isObservingThirdPartyAVPlayer;
    MPMoviePlayerController *_moviePlayerController;
    BOOL _setupInProgress;
    unsigned int _type;
    ADPrerollView *_view;
}

@property (nonatomic, retain) ADPlayer *adPlayer;
@property (nonatomic) AVPlayerViewController *avPlayerViewController;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isObservingThirdPartyAVPlayer;
@property (nonatomic) MPMoviePlayerController *moviePlayerController;
@property (nonatomic) BOOL setupInProgress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, retain) ADPrerollView *view;

- (id)_advertisementView;
- (void)_appWillResignActive;
- (BOOL)_beginPlayback;
- (void)_handlePlaybackCompletion:(BOOL)arg1;
- (BOOL)_isEmbedded;
- (void)actionButtonPressed;
- (id)adPlayer;
- (void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned int)arg2;
- (void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
- (void)adPlayerDidBeginAction:(id)arg1;
- (void)adPlayerDidFinishPlayback:(id)arg1;
- (void)adPlayerDidTimeout:(id)arg1;
- (void)adPlayerFailedToLoadAsset:(id)arg1;
- (void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
- (id)avPlayerViewController;
- (void)cancel;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)doneButtonPressed;
- (id)init;
- (id)initWithAVPlayerViewController:(id)arg1;
- (id)initWithMoviePlayerController:(id)arg1;
- (BOOL)isObservingThirdPartyAVPlayer;
- (id)moviePlayerController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseButtonPressed;
- (void)playButtonPressed;
- (void)playPrerollAdWithCompletion:(id /* block */)arg1;
- (BOOL)prerollViewRequestsEmbeddedStatus;
- (void)setAdPlayer:(id)arg1;
- (void)setAvPlayerViewController:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setIsObservingThirdPartyAVPlayer:(BOOL)arg1;
- (void)setMoviePlayerController:(id)arg1;
- (void)setSetupInProgress:(BOOL)arg1;
- (void)setView:(id)arg1;
- (BOOL)setupInProgress;
- (void)shutdown;
- (void)skipButtonPressed;
- (unsigned int)type;
- (id)view;
- (id)viewControllerForActionFromAdPlayer:(id)arg1;

@end
